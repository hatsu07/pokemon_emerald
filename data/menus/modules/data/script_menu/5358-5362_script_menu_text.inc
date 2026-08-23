	@ src/data/script_menu.h:731 gText_GoOn
	.globl sScriptMenuText_GoOn
sScriptMenuText_GoOn: @ 0x085CAFFA
	.string "つづける{EOS}"
	.if (. - sScriptMenuText_GoOn) > 0x5
	.error "sScriptMenuText_GoOn may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_GoOn) < 0x5
	.space 0x5 - (. - sScriptMenuText_GoOn)
	.endif
	@ Decoded text from ROM range: offset=0x5CAFFF, size=0x6
	.string "きろくする{EOS}"

	@ src/data/script_menu.h:451 gText_Rest (+1 aliases)
	.globl sScriptMenuText_Rest
sScriptMenuText_Rest: @ 0x085CB005
	.string "やすむ{EOS}"
	.if (. - sScriptMenuText_Rest) > 0x4
	.error "sScriptMenuText_Rest may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Rest) < 0x4
	.space 0x4 - (. - sScriptMenuText_Rest)
	.endif

	@ src/data/script_menu.h:452 gText_Retire (+1 aliases)
	.globl sScriptMenuText_Retire
sScriptMenuText_Retire: @ 0x085CB009
	.string "リタイア{EOS}"
	.if (. - sScriptMenuText_Retire) > 0x5
	.error "sScriptMenuText_Retire may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Retire) < 0x5
	.space 0x5 - (. - sScriptMenuText_Retire)
	.endif
