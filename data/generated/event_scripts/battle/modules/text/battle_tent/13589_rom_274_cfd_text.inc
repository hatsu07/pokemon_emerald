	@ data/text/battle_tent.inc:63 FallarborTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_274CFD
gText_Rom_274CFD: @ 0x08274CFD
	.string "おきゃくじん!!\pさんかできる ポケモンが\n3ひき おりませぬ!\pさんかする ためには\nすべて ちがう しゅるいの ポケモンを\l3ひき よういして くだされ\pまた もたせる どうぐも\nすべて ちがう どうぐに してくだされ!\pなお タマゴ{STR_VAR_1}さんか させる ことは できませぬ!\pじゅんびが できましたら\nまた おこし くだされ!$"
	.if (. - gText_Rom_274CFD) != 0xa6
	.error "gText_Rom_274CFD must retain its original byte length"
	.endif
