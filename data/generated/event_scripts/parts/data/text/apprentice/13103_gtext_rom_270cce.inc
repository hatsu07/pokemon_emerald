	@ data/text/apprentice.inc:571 gText_ApprenticeWhichMonFirst15
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_270CCE
gText_Rom_270CCE: @ 0x08270CCE
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lかげむしゃ って ことは ないだろうね\pいやいやいや! ほんものなら いいんだ\nおこらないで くれ!\lそして じょげんを おねがい したい!\pわたしの てもちの なかから\nどのポケモンを しょうぶの はじめに\lだせば いいのか おしえて ほしい"
	.byte EOS
	.if (. - gText_Rom_270CCE) != 0x8f
	.error "gText_Rom_270CCE must retain its original byte length"
	.endif
