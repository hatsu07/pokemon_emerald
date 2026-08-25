.if .L__inc_fragment_select_888e9d34497d == 1
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

.elseif .L__inc_fragment_select_888e9d34497d == 2
	@ src/data/decoration/header.h:188 header_line_188 (+1 aliases)
	.globl gFieldSpecialsMenuText_Block01_Item05
gFieldSpecialsMenuText_Block01_Item05: @ 0x085CB068
	.string "きれいなイス{EOS}"
	.if (. - gFieldSpecialsMenuText_Block01_Item05) > 0x7
	.error "gFieldSpecialsMenuText_Block01_Item05 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block01_Item05) < 0x7
	.space 0x7 - (. - gFieldSpecialsMenuText_Block01_Item05)
	.endif

	@ src/data/decoration/header.h:90 header_line_90 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gFieldSpecialsMenuText_Block01_Item06
gFieldSpecialsMenuText_Block01_Item06: @ 0x085CB06F
	.string "きれいなつくえ{EOS}"
	.if (. - gFieldSpecialsMenuText_Block01_Item06) != 0x8
	.error "gFieldSpecialsMenuText_Block01_Item06 must retain its original byte length"
	.endif
.endif
