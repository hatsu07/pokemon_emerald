	@ data/text/apprentice.inc:808 gText_ApprenticeWinSpeechThanks6
	.globl gText_Rom_272E2E
gText_Rom_272E2E: @ 0x08272E2E
	.string "{STR_VAR_1}\pいっ イイ!\nシブイ! それいただき!\p……ねえ わたし\nそろそろ いちにんまえに なったよね!\pあのね これから いろんなひとと\nたたかって みようと おもうの!\p{PLAYER}さんの アドバイス\nすっごく たすかったよー!\lいつか しょうぶする ときが くるかもね\lいままで ほんと ありがとー!$"
	.if (. - gText_Rom_272E2E) > 0x95
	.error "gText_Rom_272E2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272E2E) < 0x95
	.space 0x95 - (. - gText_Rom_272E2E)
	.endif
