		
	function validaFormCompleto(){
	  if(document.getElementById("nome").value=="" || 
		document.getElementById("endereco").value=="" ||
		document.getElementById("telefone").value==""||
		document.getElementById("email").value==""||
        document.getElementById("nomelivro").value==""
		){	 
			alert("Campos obrigatórios");
			return false;
		 } 
		 else{
		 var n,e,resp, t;
		   n=document.getElementById("nome").value;
		   e=document.getElementById("endereco").value;
		   t=document.getElementById("telefone").value;
		   em=document.getElementById("email").value;
           nl=document.getElementById("nomelivro").value;
		   
		   
		}
	

      var horario;
	
	horario= document.querySelector('input[name="horario"]:checked');
	
	if (!horario) {
		alert("Escolha um horário");
		return false;
	} else {
		var resp, horarioEscolhido;
		resp=document.getElementById("caixaResposta");
		horarioEscolhido= horario.value
		
	}
	
	


	  var check, qteCheck, i, qteSelecionado=0, ling="";
		   check = document.getElementsByName("genero");
		   qteCheck=check.length;
		   for(i=0;i<qteCheck; i++){
			 if(check[i].checked)  
				qteSelecionado++;  
		  }
  		  if (qteSelecionado==0){
			  alert("Escolha pelo menos um Genero");
			  return false;
		  }
		  else{
		   qteCheck=check.length;
		   for(i=0;i<qteCheck;i++){
			 if(check[i].checked)
			   ling=ling+ "   "+ check[i].value;
		  
 		   
				   
		   }
		}
	
	  

   
       var cidade;
	   cidade=document.getElementById("local");
	    if(cidade.selectedIndex==0){
		  alert("Indique seu Local de Retirada");
		  return false;		  
	   }
	   else{
		  var cid, indiceCidadeSelecionada, cidadeSelecionada;
          cidadeSelecionada=document.getElementById("local");
          indiceCidadeSelecionada=cidadeSelecionada.selectedIndex;
          cid=cidadeSelecionada.options[indiceCidadeSelecionada].value;	
		}
			
		
		 resp=document.getElementById("caixaResposta");
		 resp.innerHTML="Nome: "+ n +
						  "<br> Endereço: "+ e +
						  "<br> Telefone: "+ t +
						  "<br> Email: " + em +
						  "<br> Nome do Livro: " + nl +
						  "<br> Horário escolhido: "+ horarioEscolhido + 
						  "<br> Generos Selecionados: <br>"+ ling +
						  "<br> Biblioteca de Retirada: "+ cid;  
	}
    



	function limparCaixaResposta(){
		var resp;
		resp= document.getElementById("caixaResposta");
		resp.innerHTML="";
		
	}

	
	
	
	