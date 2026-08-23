	@ src/data/decoration/header.h:440 header_line_440 (+1 aliases)
	.globl sScriptMenuText_RedTent
sScriptMenuText_RedTent: @ 0x085CADE3
	.string "あかいテント{EOS}"
	.if (. - sScriptMenuText_RedTent) > 0x7
	.error "sScriptMenuText_RedTent may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_RedTent) < 0x7
	.space 0x7 - (. - sScriptMenuText_RedTent)
	.endif

	@ src/data/decoration/header.h:454 header_line_454 (+1 aliases)
	.globl sScriptMenuText_BlueTent
sScriptMenuText_BlueTent: @ 0x085CADEA
	.string "あおいテント{EOS}"
	.if (. - sScriptMenuText_BlueTent) > 0x7
	.error "sScriptMenuText_BlueTent may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_BlueTent) < 0x7
	.space 0x7 - (. - sScriptMenuText_BlueTent)
	.endif

