	@ data/text/apprentice.inc:481 gText_ApprenticeWhichMonFirst0
	.globl gText_Rom_270127
gText_Rom_270127: @ 0x08270127
	.string "えーん {PLAYER}さーん!\nぼく こまって いるんです グスン\pそろそろ しょうぶを して みたいけど\nポケモンを どんな じゅんばんで\lだしたら つよいのか わかんない……\p{PLAYER}さん だったら\nどの ポケモンを さいしょに だすか\l……おしえて ください!"
	.byte EOS
	.if (. - gText_Rom_270127) > 0x7f
	.error "gText_Rom_270127 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270127) < 0x7f
	.space 0x7f - (. - gText_Rom_270127)
	.endif
