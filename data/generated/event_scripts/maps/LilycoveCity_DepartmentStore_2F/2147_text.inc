	@ data/maps/LilycoveCity_DepartmentStore_2F/scripts.inc:65 LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly
	.globl gText_Rom_20A9A0
gText_Rom_20A9A0: @ 0x0820A9A0
	.string "どうぐの きほんは うまく つかいこなすこと\nこれ いちばん だいじ なのヨ{EOS}"
	.if (. - gText_Rom_20A9A0) > 0x27
	.error "gText_Rom_20A9A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A9A0) < 0x27
	.space 0x27 - (. - gText_Rom_20A9A0)
	.endif
