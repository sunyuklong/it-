<?php
$z[0]=Array("field","",34,62);
$z[0][4]=array();
$z[0][4]['name']="typeurl";
$z[1]=Array("php","\n\$thisid = \$refObj->Fields['id'];\n\$dsql->SetQuery('Select * from `dede_arctype` where reid='.\$thisid.' ORDER BY sortrank');\n\$dsql->Execute();\n\$i=0;\nwhile(\$arr = \$dsql->getArray()){\n\$i = \$i +1;\n\$str = implode(',',\$arr);\n    if(!empty(\$str) && \$i==1){\n        echo 'item-link item-link-2'; \n    }	\n}\nif(empty(\$str)) echo 'nav-item nav-item-2';\n",72,435);
$z[1][4]=array();
$z[2]=Array("field","",438,467);
$z[2][4]=array();
$z[2][4]['name']="typename";
$z[3]=Array("php","\n\$thisid = \$refObj->Fields['id'];\n\$dsql->SetQuery(\"Select * from `dede_arctype` where reid=\".\$thisid.\" ORDER BY sortrank\");\n\$dsql->Execute();\n\$i=0;\nwhile(\$arr = \$dsql->getArray()){\n\$i = \$i +1;\n\$str = implode(',',\$arr);\nif(!empty(\$str) && \$i==1){\n echo '<div id=\"dy\" class=\"menu feed\"><ul class=\"mn_con\">'; \n}\n}\n",472,804);
$z[3][4]=array();
$z[4]=Array("channel","\n<li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\n",805,918);
$z[4][4]=array();
$z[4][4]['type']="son";
$z[4][4]['noself']="yes";
$z[5]=Array("php","\n\$thisid = \$refObj->Fields['id'];\n\$dsql->SetQuery(\"Select * from `dede_arctype` where reid=\".\$thisid.\" ORDER BY sortrank\");\n\$dsql->Execute();\n\$i=0;\nwhile(\$arr = \$dsql->getArray()){\n\$i = \$i +1;\n\$str = implode(',',\$arr);\n}\nif(!empty(\$str)) echo '</ul></div>';\n",919,1198);
$z[5][4]=array();

?>