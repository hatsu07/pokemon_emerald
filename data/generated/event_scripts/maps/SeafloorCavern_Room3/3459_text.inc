	@ data/maps/SeafloorCavern_Room3/scripts.inc:23 SeafloorCavern_Room3_Text_Grunt5Intro (+1 aliases)
	.globl gText_Rom_21886E
gText_Rom_21886E: @ 0x0821886E
	.string "オレたちの やぼうの ために\nポケモンは ひつような ものだが\pポケモンの ちからを かりて\nおまえの ような やつが\lこんな ところまで ジャマしに くる!\pよのなか うまく いかない もんだ!{EOS}"
	.if (. - gText_Rom_21886E) > 0x63
	.error "gText_Rom_21886E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21886E) < 0x63
	.space 0x63 - (. - gText_Rom_21886E)
	.endif
