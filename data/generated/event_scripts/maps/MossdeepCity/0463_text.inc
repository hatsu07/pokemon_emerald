	@ data/maps/MossdeepCity/scripts.inc:318 MossdeepCity_Text_WailmerWatching
	.globl gText_Rom_1E1865
gText_Rom_1E1865: @ 0x081E1865
	.string "この トクサネの しゅうへん では\nやせいの ホエルコが けんぶつ できるんだ\pそーいうのを えーと……\nなんて いったっけ かな……\pホエ ホエ ホエ……\pホエルコ ウオッチング だ!{EOS}"
	.if (. - gText_Rom_1E1865) > 0x5e
	.error "gText_Rom_1E1865 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1865) < 0x5e
	.space 0x5e - (. - gText_Rom_1E1865)
	.endif
