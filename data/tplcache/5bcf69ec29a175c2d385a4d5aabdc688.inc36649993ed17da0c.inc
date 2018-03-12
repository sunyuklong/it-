<?php
$z[0]=Array("arcurl","",13,28);
$z[0][4]=array();
$z[1]=Array("litpic","",79,94);
$z[1][4]=array();
$z[2]=Array("arcurl","",185,200);
$z[2][4]=array();
$z[3]=Array("fulltitle","",218,236);
$z[3][4]=array();
$z[4]=Array("pubdate","",266,316);
$z[4][4]=array();
$z[4][4]['function']="MyDate('m月d日',@me)";
$z[5]=Array("description","",365,385);
$z[5][4]=array();
$z[6]=Array("id","\nglobal \$cfg_cmspath;\n\$tags = GetTags(@me);\n\$revalue = '';\n\$tags = explode(',', \$tags);\nforeach(\$tags as \$key => \$value){\n            if(\$value){\n                \$revalue .= '<a href=\"'.\$cfg_cmspath.'/tags.php?/'.\$value.'/\">'.\$value.'</a>, ';\n   }\n  }\n@me = substr(\$revalue,0,-2);\n",454,769);
$z[6][4]=array();
$z[6][4]['runphp']="yes";

?>