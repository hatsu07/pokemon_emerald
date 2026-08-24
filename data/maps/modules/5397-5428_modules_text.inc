
	@ asm/field_specials.s:4112 sub_08139BD4 (+2 aliases)
	.globl sScriptMenuText_1F
sScriptMenuText_1F: @ 0x085CB077
	.string "1かい{EOS}"
	.if (. - sScriptMenuText_1F) > 0x4
	.error "sScriptMenuText_1F may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_1F) < 0x4
	.space 0x4 - (. - sScriptMenuText_1F)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+2 aliases)
	.globl sScriptMenuText_2F
sScriptMenuText_2F: @ 0x085CB07B
	.string "2かい{EOS}"
	.if (. - sScriptMenuText_2F) > 0x4
	.error "sScriptMenuText_2F may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_2F) < 0x4
	.space 0x4 - (. - sScriptMenuText_2F)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl sScriptMenuText_3F
sScriptMenuText_3F: @ 0x085CB07F
	.string "3かい{EOS}"
	.if (. - sScriptMenuText_3F) > 0x4
	.error "sScriptMenuText_3F may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_3F) < 0x4
	.space 0x4 - (. - sScriptMenuText_3F)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl sScriptMenuText_4F
sScriptMenuText_4F: @ 0x085CB083
	.string "4かい{EOS}"
	.if (. - sScriptMenuText_4F) > 0x4
	.error "sScriptMenuText_4F may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_4F) < 0x4
	.space 0x4 - (. - sScriptMenuText_4F)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl sScriptMenuText_5F
sScriptMenuText_5F: @ 0x085CB087
	.string "5かい{EOS}"
	.if (. - sScriptMenuText_5F) > 0x4
	.error "sScriptMenuText_5F may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_5F) < 0x4
	.space 0x4 - (. - sScriptMenuText_5F)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB08B
gText_Rom_5CB08B: @ 0x085CB08B
	.string "6かい{EOS}"
	.if (. - gText_Rom_5CB08B) > 0x4
	.error "gText_Rom_5CB08B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB08B) < 0x4
	.space 0x4 - (. - gText_Rom_5CB08B)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB08F
gText_Rom_5CB08F: @ 0x085CB08F
	.string "7かい{EOS}"
	.if (. - gText_Rom_5CB08F) > 0x4
	.error "gText_Rom_5CB08F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB08F) < 0x4
	.space 0x4 - (. - gText_Rom_5CB08F)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB093
gText_Rom_5CB093: @ 0x085CB093
	.string "8かい{EOS}"
	.if (. - gText_Rom_5CB093) > 0x4
	.error "gText_Rom_5CB093 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB093) < 0x4
	.space 0x4 - (. - gText_Rom_5CB093)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB097
gText_Rom_5CB097: @ 0x085CB097
	.string "9かい{EOS}"
	.if (. - gText_Rom_5CB097) > 0x4
	.error "gText_Rom_5CB097 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB097) < 0x4
	.space 0x4 - (. - gText_Rom_5CB097)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB09B
gText_Rom_5CB09B: @ 0x085CB09B
	.string "10かい{EOS}"
	.if (. - gText_Rom_5CB09B) > 0x5
	.error "gText_Rom_5CB09B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB09B) < 0x5
	.space 0x5 - (. - gText_Rom_5CB09B)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0A0
gText_Rom_5CB0A0: @ 0x085CB0A0
	.string "11かい{EOS}"
	.if (. - gText_Rom_5CB0A0) != 0x5
	.error "gText_Rom_5CB0A0 must retain its original byte length"
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0A5
gText_Rom_5CB0A5: @ 0x085CB0A5
	.string "ビ1かい{EOS}"
	.if (. - gText_Rom_5CB0A5) != 0x5
	.error "gText_Rom_5CB0A5 must retain its original byte length"
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0AA
gText_Rom_5CB0AA: @ 0x085CB0AA
	.string "ビ2かい{EOS}"
	.if (. - gText_Rom_5CB0AA) != 0x5
	.error "gText_Rom_5CB0AA must retain its original byte length"
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0AF
gText_Rom_5CB0AF: @ 0x085CB0AF
	.string "ビ3かい{EOS}"
	.if (. - gText_Rom_5CB0AF) != 0x5
	.error "gText_Rom_5CB0AF must retain its original byte length"
	.endif

