	@ data/maps/JaggedPass/scripts.inc:150 JaggedPass_Text_EricIntro (+1 aliases)
	.globl gText_Rom_215D24
gText_Rom_215D24: @ 0x08215D24
	.string "えんとつやまの デコボコさんどう\nまさに わたしが もとめていた やま!\lこの デコボコした ところが たまらん!$"
	.if (. - gText_Rom_215D24) > 0x3a
	.error "gText_Rom_215D24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215D24) < 0x3a
	.space 0x3a - (. - gText_Rom_215D24)
	.endif
