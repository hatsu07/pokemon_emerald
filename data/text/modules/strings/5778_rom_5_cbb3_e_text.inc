	@ src/strings.c:591 gText_ThatsTrendyAlready
	.globl gText_ThatsTrendyAlready
gText_ThatsTrendyAlready: @ 0x085CBB3E
	.string "それは もう はやっています！{EOS}"
	.if (. - gText_ThatsTrendyAlready) > 0x10
	.error "gText_ThatsTrendyAlready may not grow beyond its original slot"
	.endif
	.if (. - gText_ThatsTrendyAlready) < 0x10
	.space 0x10 - (. - gText_ThatsTrendyAlready)
	.endif
