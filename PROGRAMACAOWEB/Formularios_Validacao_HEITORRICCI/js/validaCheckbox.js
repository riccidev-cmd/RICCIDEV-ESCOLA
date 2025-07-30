 	function validaObjetoCheckbox(){
	  var check, qteCheck, i, qteSelecionado=0, ling="";
	  
		   check = document.getElementsByName("genero");
		   qteCheck=check.length;
		   for(i=0;i<qteCheck; i++){
			 if(check[i].checked)  
				qteSelecionado++;  
		  } 
  		  if (qteSelecionado==0){
			  alert("Escolha pelo menos um Gênero");
			  return false;
		  }
		  else{ 
		   
		   qteCheck=check.length;
		   for(i=0;i<qteCheck;i++){
			 if(check[i].checked)
			   ling=ling+ "   "+ check[i].value;
		  
 		   resp=document.getElementById("caixaResposta");
		   resp.innerHTML="Gêneros Selecionados: <br>"+ ling;
				   
		   }
		}
	}
	  
		  
    

	function limparCaixaResposta(){
		var resp;
		resp= document.getElementById("caixaResposta");
		resp.innerHTML="";
		
	}
	
	
	
	