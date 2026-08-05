	@ data/text/match_call.inc:298 MatchCall_PersonalizedText29
	.globl gText_Rom_2675FB
gText_Rom_2675FB: @ 0x082675FB
	.string "おほほ!\pポケモンを じまん したくて しかたない\n{STR_VAR_1} ですわ!\pあなた おききに なって\nあたくしの {STR_VAR_2}ちゃん……\lほかの ひとに だっこされると\lピョンと にげだして\lあたくしの むねに とびこんでくるの!\pもう…… もう!\nこんな しあわせって ほかに あるかしら!\pああ しあわせだわ\nあなたにも しあわせを わけて あげられて\lよかったわ!\lでは しつれい するわね$"
	.if (. - gText_Rom_2675FB) > 0xbf
	.error "gText_Rom_2675FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2675FB) < 0xbf
	.space 0xbf - (. - gText_Rom_2675FB)
	.endif
