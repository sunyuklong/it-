<?php
$z[0]=Array("field","",34,62);
$z[0][4]=array();
$z[0][4]['name']="typeurl";
$z[1]=Array("field","",71,97);
$z[1][4]=array();
$z[1][4]['name']="currentstyle";
$z[2]=Array("php","\n\$thisid = \$refObj->Fields['id'];\n\$dsql->SetQuery('Select * from `dede_arctype` where reid='.\$thisid.' ORDER BY sortrank');\n\$dsql->Execute();\n\$i=0;\nwhile(\$arr = \$dsql->getArray()){\n\$i = \$i +1;\n\$str = implode(',',\$arr);\n    if(!empty(\$str) && \$i==1){\n        echo 'item-link item-link-2'; \n    }	\n}\nif(empty(\$str)) echo 'nav-item nav-item-2';\n",100,463);
$z[2][4]=array();
$z[3]=Array("field","",466,495);
$z[3][4]=array();
$z[3][4]['name']="typename";
$z[4]=Array("php","\n\$thisid = \$refObj->Fields['id'];\n\$dsql->SetQuery(\"Select * from `dede_arctype` where reid=\".\$thisid.\" ORDER BY sortrank\");\n\$dsql->Execute();\n\$i=0;\nwhile(\$arr = \$dsql->getArray()){\n\$i = \$i +1;\n\$str = implode(',',\$arr);\nif(!empty(\$str) && \$i==1){\n echo '<div id=\"dy\" class=\"menu feed\"><ul class=\"mn_con\">'; \n}\n}\n",500,832);
$z[4][4]=array();
$z[5]=Array("channel","\n<li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\n",833,946);
$z[5][4]=array();
$z[5][4]['type']="son";
$z[5][4]['noself']="yes";
$z[6]=Array("php","\n\$thisid = \$refObj->Fields['id'];\n\$dsql->SetQuery(\"Select * from `dede_arctype` where reid=\".\$thisid.\" ORDER BY sortrank\");\n\$dsql->Execute();\n\$i=0;\nwhile(\$arr = \$dsql->getArray()){\n\$i = \$i +1;\n\$str = implode(',',\$arr);\n}\nif(!empty(\$str)) echo '</ul></div>';\n",947,1226);
$z[6][4]=array();

?>