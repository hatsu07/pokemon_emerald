	@ data/text/apprentice.inc:796 gText_ApprenticeWinSpeechThanks4
	.globl gText_Rom_272BE4
gText_Rom_272BE4: @ 0x08272BE4
	.string "{STR_VAR_1}\pわるく ないわね!\nうん それで いくことに するわ!\pじゃあ…… いままで\n{PLAYER}さんに おそわった\lいろいろな ことを むねに\lわたし がんばって くる!\lいろいろと なまいき いって\lごめんなさい!\pつぎに あう ときは しょうぶよ!\nじゃあね!$"
	.if (. - gText_Rom_272BE4) > 0x81
	.error "gText_Rom_272BE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272BE4) < 0x81
	.space 0x81 - (. - gText_Rom_272BE4)
	.endif
