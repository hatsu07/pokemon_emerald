	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+32 aliases)
	.globl gText_Rom_253465
gText_Rom_253465: @ 0x08253465
	.string "{0xFD}{0x01}さんとは　まえに\nたたかった　ことが　あるのですが\pかくじつに　まえより\nつよく　なっている　かんじが　します！\pさっすが　わたしの\nちゅうもく　した　トレーナー！"
	.byte EOS
	.if (. - gText_Rom_253465) > 0x55
	.error "gText_Rom_253465 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_253465) < 0x55
	.space 0x55 - (. - gText_Rom_253465)
	.endif
