	@ data/maps/LilycoveCity_House3/scripts.inc:100 LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks
	.globl gText_Rom_20A1C2
gText_Rom_20A1C2: @ 0x0820A1C2
	.string "あら あら あら！ あなた わかいのに\nひとりたび? えらいわねえー！\lうちのこ たちにも みならわせたいわあ\pおばさんは ポロックめいじん！\nちょいと ほんきを だせば\lすごく いい ポロックを つくれるのよー！\pポロックめいじんの おばさんが\nいろいろと おしえてあげようか?{EOS}"
	.if (. - gText_Rom_20A1C2) > 0x8d
	.error "gText_Rom_20A1C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A1C2) < 0x8d
	.space 0x8d - (. - gText_Rom_20A1C2)
	.endif
