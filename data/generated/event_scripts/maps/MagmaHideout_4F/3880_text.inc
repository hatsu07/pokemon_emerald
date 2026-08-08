	@ data/maps/MagmaHideout_4F/scripts.inc:182 MagmaHideout_4F_Text_MaxieAwakenGroudon
	.globl gText_Rom_21CBDC
gText_Rom_21CBDC: @ 0x0821CBDC
	.string "マツブサ『マグマに ねむる グラードンよ\nなにをしても めざめなかった おまえが\lもとめて いたのは あいいろのたま……\pそうなんだろう?\pさあ ここに もってきて やったぞ\nこの かがやきで めを さませ!\pそして ほんとうの ちからを\nわたしに みせて おくれ!"
	.byte EOS
	.if (. - gText_Rom_21CBDC) > 0x86
	.error "gText_Rom_21CBDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CBDC) < 0x86
	.space 0x86 - (. - gText_Rom_21CBDC)
	.endif
