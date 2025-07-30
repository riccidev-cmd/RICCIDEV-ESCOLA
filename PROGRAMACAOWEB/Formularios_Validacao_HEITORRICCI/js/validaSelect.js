	function validaObjetoSelect(){
       var cidade;
	   cidade=document.getElementById("local");
	   console.log(cidade);
	   if(cidade.selectedIndex==0){
		  alert("Indique seu Local de Retirada");
		  return false;	 	  
	   } 
	   else{
		  var cid, indiceCidadeSelecionada, cidadeSelecionada;
          cidadeSelecionada=document.getElementById("local");
          indiceCidadeSelecionada=cidadeSelecionada.selectedIndex;
          cid=cidadeSelecionada.options[indiceCidadeSelecionada].value;	
		   
		  resp=document.getElementById("caixaResposta");
		  resp.innerHTML="Local: "+ cid;
		  
	    }
	}
		  
    

	function limparCaixaResposta(){
		var resp;
		resp= document.getElementById("caixaResposta");
		resp.innerHTML="";
		
	}

	
	
	
	