	@ data/text/save.inc:29 gText_SaveError
	.globl gText_SaveError
gText_SaveError: @ 0x08277048
	.string "レポートが かけませんでした\pバックアップカートリッジを\nこうかんしてください!{EOS}"
	.if (. - gText_SaveError) > 0x29
	.error "gText_SaveError may not grow beyond its original slot"
	.endif
	.if (. - gText_SaveError) < 0x29
	.space 0x29 - (. - gText_SaveError)
	.endif
