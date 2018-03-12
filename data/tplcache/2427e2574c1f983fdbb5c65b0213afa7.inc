
                <li><a href="[field:typeurl/]">[field:typename/] ([field:id runphp='yes']global $dsql;
$sql='SELECT count(*) as nums FROM dede_archives WHERE typeid='.@me;
$arcnum = $dsql->GetOne($sql);@me=$arcnum['nums'];
[/field:id])</a></li>
                