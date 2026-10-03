document.querySelector('#generator-form').addEventListener('submit', async (e) => {
  e.preventDefault();
  
  const markdownText = document.getElementById('markdown_input').value;
  
  const btn = document.getElementById('generate-btn');
  const statusDiv = document.getElementById('status');
  
  // Update UI to show loading
  btn.disabled = true;
  btn.textContent = 'Generando...';
  statusDiv.classList.remove('hidden');
  
  try {
    const response = await fetch('http://localhost:8000/generate-from-md', {
      method: 'POST',
      headers: {
        'Content-Type': 'application/json'
      },
      body: JSON.stringify({
        markdown_text: markdownText
      })
    });
    
    const data = await response.json();
    console.log(data);
    alert('Proceso iniciado con éxito. Revisa la carpeta: ' + data.folder);
    
  } catch (error) {
    console.error('Error:', error);
    alert('Error al conectar con el servidor de Python.');
  } finally {
    // Reset UI
    btn.disabled = false;
    btn.textContent = 'Generar Temática (9 Imágenes)';
    statusDiv.classList.add('hidden');
  }
});
