	@ data/text/trainers.inc:794 Route110_Text_JasminePostBattle
	.globl gText_Rom_25B61F
gText_Rom_25B61F: @ 0x0825B61F
	.string "ジムの バッチを もってるの?\nどうりで つよい はずだわ!{EOS}"
	.if (. - gText_Rom_25B61F) > 0x1f
	.error "gText_Rom_25B61F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B61F) < 0x1f
	.space 0x1f - (. - gText_Rom_25B61F)
	.endif
