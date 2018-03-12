<?php
$z[0]=Array("global","",78,104);
$z[0][4]=array();
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",160,186);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("channelartlist","\n<div class=\"tb-item dm\">\n<a href=\"{dede:field name='typeurl'/}\" class=\"{dede:field.currentstyle/}  \n{dede:php}\n\$thisid = \$refObj->Fields['id'];\n\$dsql->SetQuery('Select * from `dede_arctype` where reid='.\$thisid.' ORDER BY sortrank');\n\$dsql->Execute();\n\$i=0;\nwhile(\$arr = \$dsql->getArray()){\n\$i = \$i +1;\n\$str = implode(',',\$arr);\n    if(!empty(\$str) && \$i==1){\n        echo 'item-link item-link-2'; \n    }	\n}\nif(empty(\$str)) echo 'nav-item nav-item-2';\n{/dede:php}\n\">{dede:field name='typename'/}</a>\n{dede:php}\n\$thisid = \$refObj->Fields['id'];\n\$dsql->SetQuery(\"Select * from `dede_arctype` where reid=\".\$thisid.\" ORDER BY sortrank\");\n\$dsql->Execute();\n\$i=0;\nwhile(\$arr = \$dsql->getArray()){\n\$i = \$i +1;\n\$str = implode(',',\$arr);\nif(!empty(\$str) && \$i==1){\n echo '<div id=\"dy\" class=\"menu feed\"><ul class=\"mn_con\">'; \n}\n}\n{/dede:php}\n{dede:channel type='son' noself='yes'}\n<li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\n{/dede:channel}\n{dede:php}\n\$thisid = \$refObj->Fields['id'];\n\$dsql->SetQuery(\"Select * from `dede_arctype` where reid=\".\$thisid.\" ORDER BY sortrank\");\n\$dsql->Execute();\n\$i=0;\nwhile(\$arr = \$dsql->getArray()){\n\$i = \$i +1;\n\$str = implode(',',\$arr);\n}\nif(!empty(\$str)) echo '</ul></div>';\n{/dede:php}\n </div>\n",359,1674);
$z[2][4]=array();
$z[2][4]['typeid']="top";
$z[2][4]['currentstyle']="current";
$z[3]=Array("global","",1870,1895);
$z[3][4]=array();
$z[3][4]['name']="cfg_cmsurl";
$z[4]=Array("myad","",3526,3553);
$z[4][4]=array();
$z[4][4]['name']="top_all";

?>