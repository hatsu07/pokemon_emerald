	@ data/maps/SootopolisCity_House4/scripts.inc:25 SootopolisCity_House4_Text_StrollUnderwaterWithPokemon
	.globl gText_Rom_20F60F
gText_Rom_20F60F: @ 0x0820F60F
	.string "たからもの かぁ……\pあると いいけど\nそうでなくても ポケモンと いっしょに\lかいていを おさんぽ なんて す・て・き!$"
	.if (. - gText_Rom_20F60F) > 0x3e
	.error "gText_Rom_20F60F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F60F) < 0x3e
	.space 0x3e - (. - gText_Rom_20F60F)
	.endif
