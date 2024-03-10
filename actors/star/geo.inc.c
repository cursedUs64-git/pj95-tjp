// 0x16000EA0
const GeoLayout star_geo[] = {
	hmsShadow(100, 155, 1)
    hmsBegin()
	hmsScale(0.25f)
    	hmsBegin()
        	hmsGfx(RM_SURF  , gfx_polystar)
        	hmsGfx(RM_SPRITE, gfx_polystar_eye)
	    hmsEnd()
    hmsEnd()
    hmsExit()
};

const GeoLayout star_dust_geo[] = {
	hmsGroup()
	hmsBegin()
		hmsSelect(17, geo_switch_anim_state)
		hmsBegin()
			hmsGfx(RM_SPRITE, RCP_star_dust1)
			hmsGfx(RM_SPRITE, RCP_star_dust1)
			hmsGfx(RM_SPRITE, RCP_star_dust1)
			hmsGfx(RM_SPRITE, RCP_star_dust2)
			hmsGfx(RM_SPRITE, RCP_star_dust2)
			hmsGfx(RM_SPRITE, RCP_star_dust3)
			hmsGfx(RM_SPRITE, RCP_star_dust3)
			hmsGfx(RM_SPRITE, RCP_star_dust4)
			hmsGfx(RM_SPRITE, RCP_star_dust4)
			hmsGfx(RM_SPRITE, RCP_star_dust5)
			hmsGfx(RM_SPRITE, RCP_star_dust5)
			hmsGfx(RM_SPRITE, RCP_star_dust6)
			hmsGfx(RM_SPRITE, RCP_star_dust6)
			hmsGfx(RM_SPRITE, RCP_star_dust7)
			hmsGfx(RM_SPRITE, RCP_star_dust7)
			hmsGfx(RM_SPRITE, RCP_star_dust8)
			hmsGfx(RM_SPRITE, RCP_star_dust8)
		hmsEnd()
	hmsEnd()
	hmsExit()
};
