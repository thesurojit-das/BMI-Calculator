function fun(x)
    {
        return Number.parseFloat(x).toFixed(1);
    }
    
function cal()
    {
        var x=document.getElementById("height").value;
        var y=document.getElementById("weight").value;
        var a=x*x;
        var b=y/a*10000;
        document.getElementById("bmi").value=fun(b);
        event.preventDefault();
        if(b<16)
            document.getElementById("remark").innerHTML="Severe Thinness"   
        else if (b>=16   &&b<17){
            document.getElementById("remark").innerHTML="Moderate Thinness"   
        } 
        else if (b>=17  &&b<18.5){
            document.getElementById("remark").innerHTML="Mild Thinness"    
        }
        else if (b>=18.5 &&b<25){
            document.getElementById("remark").innerHTML="Normal"    
        }
        else if (b>=25  &&b<30){
            document.getElementById("remark").innerHTML="Overweight"    
        } 
        else if (b>30  &&b<35){
            document.getElementById("remark").innerHTML="Obese Class I"    
        }
        else if (b>=35  &&b<40){
            document.getElementById("remark").innerHTML="Obese Class II"    
        }
        else if(b>=40){
            document.getElementById("remark").innerHTML="Obese Class III" 
        } 
}
