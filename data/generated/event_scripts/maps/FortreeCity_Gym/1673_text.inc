	@ data/maps/FortreeCity_Gym/scripts.inc:256 FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_20499A
gText_Rom_20499A: @ 0x0820499A
	.string "フェザーバッジを つけてると\nひとから もらった ポケモンでも\lレベル70までの ポケモンなら\lいうことを すなおに きいてくれます!\pひでんわざの そらをとぶ を\nつかえる ようにも なります!\pそして これを\nあなたに プレゼント します{EOS}"
	.if (. - gText_Rom_20499A) != 0x7a
	.error "gText_Rom_20499A must retain its original byte length"
	.endif
