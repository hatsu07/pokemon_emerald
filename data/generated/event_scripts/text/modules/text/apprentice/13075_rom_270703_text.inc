	@ data/text/apprentice.inc:529 gText_ApprenticeWhichMonFirst8
	.globl gText_Rom_270703
gText_Rom_270703: @ 0x08270703
	.string "キャーキャー!\n{PLAYER} さーんっ!\lきょうも あえて かんげきっ……!\pわたしの ポケモンたち\nつよく なりましたよ!\lでも はじめに だす ポケモンで\lかったり まけたり しちゃうんです\p{PLAYER}さん おねがいが!\nどのコを はじめに だしたら いいのか\lぜひ きめて ほしいのですっ!"
	.byte EOS
	.if (. - gText_Rom_270703) > 0x8e
	.error "gText_Rom_270703 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270703) < 0x8e
	.space 0x8e - (. - gText_Rom_270703)
	.endif
