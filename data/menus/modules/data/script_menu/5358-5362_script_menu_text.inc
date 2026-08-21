	@ src/data/script_menu.h:731 gText_GoOn
	.globl gText_Rom_5CAFFA
gText_Rom_5CAFFA: @ 0x085CAFFA
	.string "つづける{EOS}"
	.if (. - gText_Rom_5CAFFA) > 0x5
	.error "gText_Rom_5CAFFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAFFA) < 0x5
	.space 0x5 - (. - gText_Rom_5CAFFA)
	.endif
	@ Decoded text from ROM range: offset=0x5CAFFF, size=0x6
	.string "きろくする{EOS}"

	@ src/data/script_menu.h:451 gText_Rest (+1 aliases)
	.globl gText_Rom_5CB005
gText_Rom_5CB005: @ 0x085CB005
	.string "やすむ{EOS}"
	.if (. - gText_Rom_5CB005) > 0x4
	.error "gText_Rom_5CB005 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB005) < 0x4
	.space 0x4 - (. - gText_Rom_5CB005)
	.endif

	@ src/data/script_menu.h:452 gText_Retire (+1 aliases)
	.globl gText_Rom_5CB009
gText_Rom_5CB009: @ 0x085CB009
	.string "リタイア{EOS}"
	.if (. - gText_Rom_5CB009) > 0x5
	.error "gText_Rom_5CB009 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB009) < 0x5
	.space 0x5 - (. - gText_Rom_5CB009)
	.endif
