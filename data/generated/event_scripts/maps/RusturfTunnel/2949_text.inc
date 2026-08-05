	@ data/maps/RusturfTunnel/scripts.inc:451 RusturfTunnel_Text_ExplainStrength
	.globl gText_Rom_213C7B
gText_Rom_213C7B: @ 0x08213C7B
	.string "そいつには かいりきが はいっている\nちからもちの ポケモンに おぼえさせれば\lおおきな いわを うごかせるよ$"
	.if (. - gText_Rom_213C7B) > 0x38
	.error "gText_Rom_213C7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213C7B) < 0x38
	.space 0x38 - (. - gText_Rom_213C7B)
	.endif
