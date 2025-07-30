function validaObjetoRadio(){
	
	var horario;
	
	horario= document.querySelector('input[name="horario"]:checked');
	
	if (!horario) {
		alert("Escolha um horário");
		return false;
	} else {
		var resp, horarioEscolhido;
		resp=document.getElementById("caixaResposta");
		horarioEscolhido= horario.value
		resp.innerHTML = "Horário escolhido: " + horarioEscolhido;
	}
} 
	
	
	   
		
	function limparCaixaResposta(){
		var resp;
		resp= document.getElementById("caixaResposta");
		resp.innerHTML="";
		
	}

	
	
	
	