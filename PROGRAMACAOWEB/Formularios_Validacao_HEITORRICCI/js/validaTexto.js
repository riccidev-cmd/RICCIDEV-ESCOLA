	function validaObjetoTexto(){
	  if(document.getElementById("nome").value=="" || 
		 document.getElementById("endereco").value=="" || 
		 document.getElementById("telefone").value=="" ||
		 document.getElementById("email").value==""||
		 document.getElementById("nomelivro").value==""
		){
			alert("Campos obrigatórios");
			return false;  
		 } 
		 else{
		 var n,e,t,resp,em;
		   n=document.getElementById("nome").value;
		   e=document.getElementById("endereco").value;
		   t=document.getElementById("telefone").value;
		   em=document.getElementById("email").value;
		   nl=document.getElementById("nomelivro").value;

		   resp=document.getElementById("caixaResposta");
		   resp.innerHTML="Nome: "+ n +
						  "<br>Endereço: "+ e +
						  "<br>Telefone: "+ t +
						  "<br>Email: "+ em +
						  "<br>Nome do Livro" + nl;
		   
		}
	}

	function limparCaixaResposta(){
		var resp;
		resp= document.getElementById("caixaResposta");
		resp.innerHTML="";
		
	}

	
	
	
	