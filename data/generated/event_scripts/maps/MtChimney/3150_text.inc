	@ data/maps/MtChimney/scripts.inc:843 MtChimney_Text_SawyerRematchIntro (+1 aliases)
	.globl gText_Rom_215A91
gText_Rom_215A91: @ 0x08215A91
	.string "あっつい おねいさん たちに\nかこまれて しあわせな おれは まけんぜ!{EOS}"
	.if (. - gText_Rom_215A91) > 0x25
	.error "gText_Rom_215A91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215A91) < 0x25
	.space 0x25 - (. - gText_Rom_215A91)
	.endif
