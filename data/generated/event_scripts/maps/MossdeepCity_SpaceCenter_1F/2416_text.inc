	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:359 MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_20D5FC
gText_Rom_20D5FC: @ 0x0820D5FC
	.string "これは……\nはんこう よこくじょう？\p「うちゅうセンターの みなさん\n いかが おすごしで しょうか\p ロケットの ねんりょうは\n まもなく われわれが いただきます\l イヤだと いっても ムダなのでーす\p もっと りくちを!\n              マグマだん$"
	.if (. - gText_Rom_20D5FC) != 0x86
	.error "gText_Rom_20D5FC must retain its original byte length"
	.endif
