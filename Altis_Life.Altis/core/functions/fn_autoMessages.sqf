	/*  
    File: fn_autoMessages.sqf  
    Author: BenjaminSansNom  

    Description:  
    Auto messages in game every X seconds  
*/  

[] spawn {  
    // Add a line in this array to add a message  
    _messages = [  
        "Welcome to SpearLine Gaming. Enjoy your Stay!<br/> <t color=	'#e32828' size='1.5'>https://slgaltislife.enjin.com/</t>",  
        "Teamspeak Address:<br/><t color='#e32828' size='1.5'>slg.ts.nfoservers.com</t>"  
    ];  

    _refreshTime = 600; // Time between each message (in seconds)  

    _i = 0;  
    while {true} do {  
        _count = count _messages;  
        _message = _messages select _i;  
        hint parseText format["<t color='#0000cc' size='3'>Spearline</t><br/><br/><t color='#c45454'size='3'>Gaming</t><br/><br/><img shadow='false' size='6' image='textures\armalife.jpg'/><br/><br/>%1", _message];  
        sleep _refreshTime;  
        if (_i == (_count - 1)) then {  
            _i = 0;  
        } else {  
            _i = _i + 1;  
        };  
    };  
};