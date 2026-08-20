	@ data/text/trainers.inc:2858 Route126_Text_PabloRematchDefeat (+1 aliases)
	.globl gText_Rom_260D12
gText_Rom_260D12: @ 0x08260D12
	.string "おわっ ほんと つよいな\nいいね! いいね!{EOS}"
	.if (. - gText_Rom_260D12) > 0x17
	.error "gText_Rom_260D12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260D12) < 0x17
	.space 0x17 - (. - gText_Rom_260D12)
	.endif
