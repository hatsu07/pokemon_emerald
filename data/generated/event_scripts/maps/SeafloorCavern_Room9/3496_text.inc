	@ data/maps/SeafloorCavern_Room9/scripts.inc:245 SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard
	.globl gText_Rom_218E43
gText_Rom_218E43: @ 0x08218E43
	.string "アオギリ『どうした……?\pふうむ……\nおおあめが ふっている……\pそうだろう…… それこそが\nわれわれ アクアだんの もくてき\lうみを ふやすために カイオーガを\lめざめさせた りゆう なのだからな\pなんだと!\pよそう いじょうの あめで\nこのままでは われわれも キケンだと?\pそんな ばかな……\nとにかく ようすを みているんだ!{EOS}"
	.if (. - gText_Rom_218E43) > 0xa8
	.error "gText_Rom_218E43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_218E43) < 0xa8
	.space 0xa8 - (. - gText_Rom_218E43)
	.endif
