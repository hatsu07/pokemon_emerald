	@ data/maps/LilycoveCity/scripts.inc:688 LilycoveCity_Text_HarborSignUnderConstruction
	.globl gText_Rom_1E129D
gText_Rom_1E129D: @ 0x081E129D
	.string "「ミナモ シティ ふねのりば」\pれんらくせん タイドリップごう は\nカイナシティにて けんぞう ちゅう!\pもう しばらく おまちください!$"
	.if (. - gText_Rom_1E129D) > 0x46
	.error "gText_Rom_1E129D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E129D) < 0x46
	.space 0x46 - (. - gText_Rom_1E129D)
	.endif
