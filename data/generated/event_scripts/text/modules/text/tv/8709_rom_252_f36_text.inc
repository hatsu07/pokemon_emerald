	@ data/text/tv.inc:1177 GabbyAndTy_Text_WhoAreYouInterview
	.globl gText_Rom_252F36
gText_Rom_252F36: @ 0x08252F36
	.string "マリ『すごい! すごい!\nあなた いったい なにもの!?\pさすが わたしたちが\nめを つけただけ あるわ!\p……あっ じつは わたしたち\nいろんな ばしょの いろんな トレーナーを\lインタビューして まわっているのよ\pだから すこしだけ\nインタビュー させて もらえないかな?"
	.byte EOS
	.if (. - gText_Rom_252F36) > 0x8b
	.error "gText_Rom_252F36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252F36) < 0x8b
	.space 0x8b - (. - gText_Rom_252F36)
	.endif
