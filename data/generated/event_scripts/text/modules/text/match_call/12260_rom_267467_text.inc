	@ data/text/match_call.inc:292 MatchCall_PersonalizedText27
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_267467
gText_Rom_267467: @ 0x08267467
	.string "ミホでーす!\nきょうも こうはいの リコと いっしょだよ\pもうね! リコも ポケモンも\nかわいくて しかたないの\lおとうとや いもうと みたいに\lずーっと めんどう みて あげたいな!\pあ リコ!\nパン かってきて くれた?\pえ? な なによ\nつかいっぱしり なんて させてないわよ!\lポケモン しょうぶで まけたから\lこれは ばつゲームなの!\pかわいい リコを\nこきつかうわけ ないでしょ!\lじゃ これから おやつだから バイバイ!$"
	.if (. - gText_Rom_267467) != 0xda
	.error "gText_Rom_267467 must retain its original byte length"
	.endif
