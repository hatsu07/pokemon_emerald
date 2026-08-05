	@ data/text/berries.inc:96 Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother
	.globl gText_Rom_263B47
gText_Rom_263B47: @ 0x08263B47
	.string "ほれ えんりょ せずに もう ひとつ!$"
	.if (. - gText_Rom_263B47) > 0x14
	.error "gText_Rom_263B47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263B47) < 0x14
	.space 0x14 - (. - gText_Rom_263B47)
	.endif
