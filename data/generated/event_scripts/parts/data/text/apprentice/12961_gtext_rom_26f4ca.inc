	@ data/text/apprentice.inc:358 gText_ApprenticeItemAlreadyRecommended7
	.globl gText_Rom_26F4CA
gText_Rom_26F4CA: @ 0x0826F4CA
	.string "それは もう おしえて いただいて\nわたくし もっておりますわ!\pそれとも…… {STR_VAR_2}には\nなにも もたせないで よろしいと……?"
	.byte EOS
	.if (. - gText_Rom_26F4CA) > 0x41
	.error "gText_Rom_26F4CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F4CA) < 0x41
	.space 0x41 - (. - gText_Rom_26F4CA)
	.endif
