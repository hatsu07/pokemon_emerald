	@ data/maps/MtPyre_2F/scripts.inc:109 MtPyre_2F_Text_LeahIntro (+1 aliases)
	.globl gText_Rom_216542
gText_Rom_216542: @ 0x08216542
	.string "みかけぬ かおね……\nなにも おきない うちに かえりなさい!{EOS}"
	.if (. - gText_Rom_216542) > 0x20
	.error "gText_Rom_216542 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216542) < 0x20
	.space 0x20 - (. - gText_Rom_216542)
	.endif
