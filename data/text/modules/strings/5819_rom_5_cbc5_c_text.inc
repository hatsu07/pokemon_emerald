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
