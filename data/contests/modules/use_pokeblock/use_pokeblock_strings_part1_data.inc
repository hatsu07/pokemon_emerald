	@ src/strings.c:90 gText_DexSearchAlphaVWX
	.globl gText_DexSearchAlphaVWX_Copy_Text
gText_DexSearchAlphaVWX_Copy_Text: @ 0x085CBC5C
	.string "らりるれろ{EOS}"
	.if (. - gText_DexSearchAlphaVWX_Copy_Text) > 0x6
	.error "gText_DexSearchAlphaVWX_Copy_Text may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaVWX_Copy_Text) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaVWX_Copy_Text)
	.endif

	@ src/strings.c:610 gText_YouCannotQuitHere
	.globl gText_YouCannotQuitHere
gText_YouCannotQuitHere: @ 0x085CBC62
	.string "ここでは とちゅうで{EOS}"
	.if (. - gText_YouCannotQuitHere) > 0xb
	.error "gText_YouCannotQuitHere may not grow beyond its original slot"
	.endif
	.if (. - gText_YouCannotQuitHere) < 0xb
	.space 0xb - (. - gText_YouCannotQuitHere)
	.endif

	@ src/strings.c:611 gText_SectionMustBeCompleted
	.globl gText_SectionMustBeCompleted
gText_SectionMustBeCompleted: @ 0x085CBC6D
	.string "やめることは できません!{EOS}"
	.if (. - gText_SectionMustBeCompleted) > 0xe
	.error "gText_SectionMustBeCompleted may not grow beyond its original slot"
	.endif
	.if (. - gText_SectionMustBeCompleted) < 0xe
	.space 0xe - (. - gText_SectionMustBeCompleted)
	.endif
