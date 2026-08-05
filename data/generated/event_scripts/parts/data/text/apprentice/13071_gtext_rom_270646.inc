	@ data/text/apprentice.inc:523 gText_ApprenticeWhichMonFirst7
	.globl gText_Rom_270646
gText_Rom_270646: @ 0x08270646
	.string "はなしかけて くださって\nありがとう ございます {PLAYER}さん\pその おやさしさに あまえて\nきょうも そうだんが ありますの……\pあの ポケモンの じゅんばんを\nきめて いただきたいん ですの\pさいしょに だす なら\nどの ポケモンが よろしいでしょうか?"
	.byte EOS
	.if (. - gText_Rom_270646) > 0x80
	.error "gText_Rom_270646 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270646) < 0x80
	.space 0x80 - (. - gText_Rom_270646)
	.endif
