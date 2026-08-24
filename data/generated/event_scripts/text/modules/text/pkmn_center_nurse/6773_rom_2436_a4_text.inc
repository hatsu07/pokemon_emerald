	@ data/text/pkmn_center_nurse.inc:18 gText_WeHopeToSeeYouAgain (+1 aliases)
	.globl gText_WeHopeToSeeYouAgain_Copy_PkmnCenterNurse
gText_WeHopeToSeeYouAgain_Copy_PkmnCenterNurse: @ 0x082436A4
	.string "またの\nごりようを おまち してます!{EOS}"
	.if (. - gText_WeHopeToSeeYouAgain_Copy_PkmnCenterNurse) > 0x14
	.error "gText_WeHopeToSeeYouAgain_Copy_PkmnCenterNurse may not grow beyond its original slot"
	.endif
	.if (. - gText_WeHopeToSeeYouAgain_Copy_PkmnCenterNurse) < 0x14
	.space 0x14 - (. - gText_WeHopeToSeeYouAgain_Copy_PkmnCenterNurse)
	.endif
